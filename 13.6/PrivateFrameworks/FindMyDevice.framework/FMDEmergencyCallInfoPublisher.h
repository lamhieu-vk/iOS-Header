//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject
{
    FMDEmergencyCallInfoPublisherConfiguration *_publisherConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FMDEmergencyCallInfoPublisherConfiguration *publisherConfig; // @synthesize publisherConfig=_publisherConfig;
- (void)publishInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

