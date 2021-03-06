//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTrafficFeature.h>

@class NSString;

@interface VKTrafficCameraFeature : VKTrafficFeature
{
    long long _type;
    _Bool _isAboveSpeedThreshold;
    unsigned int _speedLimit;
    NSString *_speedLimitText;
    unsigned int _speedThreshold;
}

@property(readonly, nonatomic) NSString *speedLimitText; // @synthesize speedLimitText=_speedLimitText;
@property(nonatomic) _Bool isAboveSpeedThreshold; // @synthesize isAboveSpeedThreshold=_isAboveSpeedThreshold;
@property(readonly, nonatomic) unsigned int speedThreshold; // @synthesize speedThreshold=_speedThreshold;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isSpeedLimitCamera;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTrafficCamera:(id)arg1;

@end

