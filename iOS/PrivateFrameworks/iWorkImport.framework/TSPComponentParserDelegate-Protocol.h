//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSPComponentParser;

@protocol TSPComponentParserDelegate <NSObject>
- (_Bool)componentParser:(TSPComponentParser *)arg1 didReadArchiveInfo:(const struct ArchiveInfo *)arg2 stream:(struct DispatchDataInputStream *)arg3 error:(id *)arg4;
@end

