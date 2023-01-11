//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteUI/NSObject-Protocol.h>

@class NSDictionary, NSString, RUIPage, UITableView, UIView;
@protocol RUITableFooterDelegate;

@protocol RemoteUITableFooter <NSObject>
- (id)initWithAttributes:(NSDictionary *)arg1;

@optional
- (void)configureInPage:(RUIPage *)arg1;
- (double)footerHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setDelegate:(id <RUITableFooterDelegate>)arg1;
- (double)footerHeightForWidth:(double)arg1 inView:(UIView *)arg2;
@end

