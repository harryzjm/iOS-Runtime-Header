//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeynoteQuicklook/NSObject-Protocol.h>

@class KNSlideLayoutPrintHelper, KNSlideNode, NSArray;

@protocol KNSlideLayoutPrintHelperDataSource <NSObject>
- (unsigned long long)printHelper:(KNSlideLayoutPrintHelper *)arg1 commentsPageCountForSlideNode:(KNSlideNode *)arg2;
- (NSArray *)printHelper:(KNSlideLayoutPrintHelper *)arg1 noteSegmentsForSlideNode:(KNSlideNode *)arg2;
- (NSArray *)slideNodesForPrintHelper:(KNSlideLayoutPrintHelper *)arg1;
@end
