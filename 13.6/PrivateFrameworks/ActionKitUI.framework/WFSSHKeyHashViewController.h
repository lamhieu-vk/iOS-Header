//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSString, WFTableDataSource;

__attribute__((visibility("hidden")))
@interface WFSSHKeyHashViewController : UITableViewController
{
    NSString *_hashString;
    WFTableDataSource *_dataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
- (void)viewDidLoad;
- (id)initWithHashString:(id)arg1 title:(id)arg2;

@end

