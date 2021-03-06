//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class ARWorldTrackingPoseData;

@interface AR3DSkeletonRegistrationTechnique : ARTechnique
{
    _Bool _is_tracking;
    int _last_btr_poses_idx;
    float _estimatedScale;
    double _last_detection_timestamp;
    struct array<float, 2> _depth_scaler_num_den;
    unsigned long long _depth_scaler_observation_count;
    struct shared_ptr<arkit::btr::ScaleCorrection> _scaler;
    struct shared_ptr<arkit::btr::BodyRegistration> _btr;
    struct array<arkit::btr::RegistrationData, 5> _last_btr_poses;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _dumps_dir;
    struct basic_ofstream<char, std::__1::char_traits<char>> _btrf;
    struct basic_ofstream<char, std::__1::char_traits<char>> _btrts;
    ARWorldTrackingPoseData *_currentWorldTrackingPose;
    _Bool _automaticSkeletonScaleEstimationEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool automaticSkeletonScaleEstimationEnabled; // @synthesize automaticSkeletonScaleEstimationEnabled=_automaticSkeletonScaleEstimationEnabled;
- (_Bool)isEqual:(id)arg1;
-     // Error parsing type: B64@0:8@16@24@32^{?=[4]}40@48^f56, name: _estimateCameraPoseFromMatchingImageData:to3DData:worldTrackingPose:pCameraFromBody:depthData:pScaleOut:
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (void)resetState;
- (id)init;

@end

