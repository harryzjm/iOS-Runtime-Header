//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class GQPProcessor;

@protocol GQPObjectReader <NSObject>
- (int)doneReading:(GQPProcessor *)arg1;
- (int)beginReadingFromReader:(struct _xmlTextReader *)arg1 processor:(GQPProcessor *)arg2;
@end

