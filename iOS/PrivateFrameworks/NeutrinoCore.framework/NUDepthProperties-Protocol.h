//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class AVDepthData, NSDictionary, NSString;

@protocol NUDepthProperties <NSObject>
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) NSString *depthType;
- (NSDictionary *)auxiliaryData:(out id *)arg1;
- (AVDepthData *)depthData:(out id *)arg1;
@end

