//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSSecureCoding-Protocol.h>

@interface BBThumbnailSizeConstraints : NSObject <NSSecureCoding>
{
    float _fixedWidth;
    float _fixedHeight;
    float _fixedDimension;
    float _minAspectRatio;
    float _maxAspectRatio;
    float _thumbnailScale;
    long long _constraintType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float thumbnailScale; // @synthesize thumbnailScale=_thumbnailScale;
@property(nonatomic) float maxAspectRatio; // @synthesize maxAspectRatio=_maxAspectRatio;
@property(nonatomic) float minAspectRatio; // @synthesize minAspectRatio=_minAspectRatio;
@property(nonatomic) float fixedDimension; // @synthesize fixedDimension=_fixedDimension;
@property(nonatomic) float fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) float fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(nonatomic) long long constraintType; // @synthesize constraintType=_constraintType;
- (struct CGSize)sizeFromAspectRatio:(double)arg1;
- (_Bool)areReasonable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

