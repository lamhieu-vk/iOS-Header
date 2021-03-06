//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class CLKDevice;

@interface NTKLayoutRule : NSObject <NSCopying>
{
    _Bool _clipsToReferenceFrame;
    CLKDevice *_device;
    long long _horizontalLayout;
    long long _verticalLayout;
    struct CGRect _referenceFrame;
    struct CGAffineTransform _transform;
}

+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 clip:(_Bool)arg5 transform:(struct CGAffineTransform)arg6;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(struct CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) _Bool clipsToReferenceFrame; // @synthesize clipsToReferenceFrame=_clipsToReferenceFrame;
@property(nonatomic) long long verticalLayout; // @synthesize verticalLayout=_verticalLayout;
@property(nonatomic) long long horizontalLayout; // @synthesize horizontalLayout=_horizontalLayout;
@property(nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (id)description;
- (void)validate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize maximumSize;
- (struct CGRect)calculateLayoutFrameForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameHeightForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameWidthForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameYOriginForBoundsSize:(struct CGSize)arg1;
- (double)calculateLayoutFrameXOriginForBoundsSize:(struct CGSize)arg1;
- (id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(struct CGRect)arg1;
- (id)initForDevice:(id)arg1;

@end

