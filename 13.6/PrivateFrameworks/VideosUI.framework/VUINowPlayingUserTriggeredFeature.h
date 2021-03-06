//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUINowPlayingUserTriggeredFeature-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingUserTriggeredFeature : NSObject <VUINowPlayingUserTriggeredFeature>
{
    _Bool _active;
    _Bool _autoRemove;
    id _userInfo;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, getter=shouldAutoRemove) _Bool autoRemove; // @synthesize autoRemove=_autoRemove;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

