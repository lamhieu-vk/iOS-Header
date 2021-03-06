//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNReduceBinary.h>

@interface MPSNNLocalCorrelation : MPSNNReduceBinary
{
    unsigned long long _windowInX;
    unsigned long long _windowInY;
    unsigned long long _strideInX;
    unsigned long long _strideInY;
}

@property(nonatomic) unsigned long long strideInY; // @synthesize strideInY=_strideInY;
@property(nonatomic) unsigned long long strideInX; // @synthesize strideInX=_strideInX;
@property(nonatomic) unsigned long long windowInY; // @synthesize windowInY=_windowInY;
@property(nonatomic) unsigned long long windowInX; // @synthesize windowInX=_windowInX;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 windowInX:(unsigned long long)arg2 windowInY:(unsigned long long)arg3 strideInX:(unsigned long long)arg4 strideInY:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1;

@end

