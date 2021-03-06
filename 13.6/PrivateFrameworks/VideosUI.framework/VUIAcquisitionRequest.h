//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIStoreAcquisitionProperties;

__attribute__((visibility("hidden")))
@interface VUIAcquisitionRequest : NSObject
{
    _Bool _cancelled;
    VUIStoreAcquisitionProperties *_properties;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) VUIStoreAcquisitionProperties *properties; // @synthesize properties=_properties;

@end

