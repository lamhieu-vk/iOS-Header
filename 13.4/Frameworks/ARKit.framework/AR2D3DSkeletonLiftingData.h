//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@interface AR2D3DSkeletonLiftingData : NSObject <NSSecureCoding, NSCopying>
{
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _rawJointsUsedForLifting;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _rotatedJointsUsedForLifting;
    struct array<float, 32> _multiArray;
    long long _rotationNeeded;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_prepareLiftingInput:(const struct Human *)arg1 jointTrackingState:(const array_d2feeb34 *)arg2 imageSize:(struct CGSize)arg3 pMultiArray:(float *)arg4;
@property(readonly, nonatomic) unsigned long long liftingData3DElementCount;
@property(readonly, nonatomic) const float *liftingData3D;
@property(readonly, nonatomic) unsigned long long jointCount;
// Error parsing type for property joints:
// Property attributes: Tr^,R,N

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)_rotateAndUndoCroppingFromRect:(struct CGRect)arg1;
- (id)initWithHumanForLifting:(const struct Human *)arg1 imageSize:(struct CGSize)arg2 rotation:(long long)arg3 croppedRect:(struct CGRect)arg4;
-     // Error parsing type: @88@0:8r^16Q24q32{CGRect={CGPoint=dd}{CGSize=dd}}40r^f72Q80, name: initWithJoints:numberOfJoints:rotation:croppedRect:liftingData3D:liftingData3DElementCount:

@end

