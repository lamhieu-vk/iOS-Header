//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKProtoMessageContentSync;

@interface NNMKMessageContentResult : NSObject
{
    _Bool _isContentCompletelySynced;
    _Bool _isNotificationPriority;
    _Bool _isUserRequest;
    _Bool _alreadySyncedWithCurrentPriority;
    _Bool _messageDoesNotExist;
    NNMKProtoMessageContentSync *_protoMessageContentSync;
    unsigned long long _resendInterval;
    long long _compressedTextDataLength;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool messageDoesNotExist; // @synthesize messageDoesNotExist=_messageDoesNotExist;
@property(nonatomic) _Bool alreadySyncedWithCurrentPriority; // @synthesize alreadySyncedWithCurrentPriority=_alreadySyncedWithCurrentPriority;
@property(nonatomic) _Bool isUserRequest; // @synthesize isUserRequest=_isUserRequest;
@property(nonatomic) _Bool isNotificationPriority; // @synthesize isNotificationPriority=_isNotificationPriority;
@property(nonatomic) _Bool isContentCompletelySynced; // @synthesize isContentCompletelySynced=_isContentCompletelySynced;
@property(nonatomic) long long compressedTextDataLength; // @synthesize compressedTextDataLength=_compressedTextDataLength;
@property(nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;
@property(retain, nonatomic) NNMKProtoMessageContentSync *protoMessageContentSync; // @synthesize protoMessageContentSync=_protoMessageContentSync;

@end

