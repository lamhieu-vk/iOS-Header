//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsToday/NSObject-Protocol.h>

@class NSData, NSString;

@protocol NNSyncableHeadline <NSObject>
@property(readonly, nonatomic) NSString *sync_NewsURLString;
@property(readonly, nonatomic) NSString *sync_webURLString;
@property(readonly, nonatomic) NSString *sync_publisherIdentifier;
@property(readonly, nonatomic) NSString *sync_publisherName;
@property(readonly, nonatomic) NSData *sync_publisherLogoImageData;
@property(readonly, nonatomic) NSData *sync_thumbnailImageData;
@property(readonly, nonatomic) NSString *sync_excerpt;
@property(readonly, nonatomic) NSString *sync_title;
@property(readonly, nonatomic) NSString *sync_identifier;
@end

