//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIParallelogramTile : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputAcuteAngle;
    NSNumber *inputWidth;
}

+ (id)customAttributes;
- (id)outputImage;

@end

