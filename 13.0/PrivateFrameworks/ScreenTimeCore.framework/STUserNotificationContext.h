//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, UNNotificationTrigger;

__attribute__((visibility("hidden")))
@interface STUserNotificationContext : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_localizedUserNotificationBodyArguments;
    UNNotificationTrigger *_trigger;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) UNNotificationTrigger *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) NSArray *localizedUserNotificationBodyArguments; // @synthesize localizedUserNotificationBodyArguments=_localizedUserNotificationBodyArguments;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *notificationBundleIdentifier;
@property(readonly) NSNumber *destinations;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)notificationContentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

