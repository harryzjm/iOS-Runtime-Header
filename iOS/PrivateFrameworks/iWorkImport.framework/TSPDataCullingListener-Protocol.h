//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSPData;

@protocol TSPDataCullingListener <NSObject>
- (void)didReplaceContentsOfData:(TSPData *)arg1;
- (void)willCullData:(TSPData *)arg1;
@end
