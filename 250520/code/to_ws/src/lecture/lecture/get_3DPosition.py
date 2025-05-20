import pyrealsense2 as rs
import numpy as np
import cv2


def mouse_callback(event, x, y, flags, param):
    if event == cv2.EVENT_LBUTTONDOWN:
        depth_frame, depth_intrinsics = param
        depth_value = depth_frame.get_distance(x, y)

        point_3d = rs.rs2_deproject_pixel_to_point(
            depth_intrinsics, [x, y], depth_value
        )
        print(
            f"Pixel: ({x}, {y}), Depth: {depth_value:.3f} m, 3D Coordinates: {point_3d}"
        )


pipeline = rs.pipeline()
config = rs.config()
config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)

pipeline.start(config)

try:
    while True:
        frames = pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()
        depth_frame = frames.get_depth_frame()

        color_image = np.asanyarray(color_frame.get_data())
        depth_intrinsics = depth_frame.profile.as_video_stream_profile().intrinsics

        cv2.namedWindow("RealSense RGB")
        cv2.setMouseCallback(
            "RealSense RGB", mouse_callback, param=(depth_frame, depth_intrinsics)
        )
        cv2.imshow("RealSense RGB", color_image)

        if cv2.waitKey(1) & 0xFF == ord("q"):
            break


finally:
    pipeline.stop()
    cv2.destroyAllWindows()
