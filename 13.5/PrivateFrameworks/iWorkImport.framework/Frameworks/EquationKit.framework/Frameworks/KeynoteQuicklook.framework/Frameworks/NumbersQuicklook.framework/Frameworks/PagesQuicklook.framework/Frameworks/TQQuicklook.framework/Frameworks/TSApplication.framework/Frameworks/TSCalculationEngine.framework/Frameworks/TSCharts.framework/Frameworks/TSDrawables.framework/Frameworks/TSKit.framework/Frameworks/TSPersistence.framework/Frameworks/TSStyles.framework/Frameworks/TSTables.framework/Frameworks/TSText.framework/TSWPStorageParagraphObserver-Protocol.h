//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPStorageObserver-Protocol.h>

@class TSWPStorage;

@protocol TSWPStorageParagraphObserver <TSWPStorageObserver>
- (void)storage:(TSWPStorage *)arg1 didChangeParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)storage:(TSWPStorage *)arg1 didDeleteParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)storage:(TSWPStorage *)arg1 didInsertParagraphsInIndexRange:(struct _NSRange)arg2;
@end

