//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCTodayPrivateDataTransaction-Protocol.h>

@class NSDate, NSString;

@interface FCTodayMarkAsReadTransaction : NSObject <FCTodayPrivateDataTransaction>
{
    NSString *_articleID;
    long long _articleVersion;
    NSDate *_readDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *readDate; // @synthesize readDate=_readDate;
@property(nonatomic) long long articleVersion; // @synthesize articleVersion=_articleVersion;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithTodayPrivateData:(id)arg1;
- (void)performWithPrivateDataContext:(id)arg1;
- (id)initWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3;
- (id)init;

@end

