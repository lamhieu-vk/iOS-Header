//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter
{
    NSString *_template;
}

@property(copy, nonatomic) NSString *template; // @synthesize template=_template;
- (void).cxx_destruct;
- (void)updateDateFormat;
- (id)notificationCenter;
- (id)initWithTemplate:(id)arg1;
- (void)dealloc;

@end

