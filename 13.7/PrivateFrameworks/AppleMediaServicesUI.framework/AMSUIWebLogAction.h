//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebActionRunnable-Protocol.h>

@class AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebLogAction : NSObject <AMSUIWebActionRunnable>
{
    AMSUIWebClientContext *_context;
    long long _level;
    NSString *_message;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
- (unsigned char)_logTypeFromLevel:(long long)arg1;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

