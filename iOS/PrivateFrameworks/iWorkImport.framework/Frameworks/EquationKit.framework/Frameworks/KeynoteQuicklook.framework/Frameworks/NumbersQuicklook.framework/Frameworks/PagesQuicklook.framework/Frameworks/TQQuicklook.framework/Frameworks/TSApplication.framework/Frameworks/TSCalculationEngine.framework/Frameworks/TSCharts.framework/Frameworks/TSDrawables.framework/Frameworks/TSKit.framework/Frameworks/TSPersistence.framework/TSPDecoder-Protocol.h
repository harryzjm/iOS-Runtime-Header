//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/NSObject-Protocol.h>

@protocol TSPDecoderDataInfo, TSUStreamReadChannel;

@protocol TSPDecoder <NSObject>
- (id <TSUStreamReadChannel>)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id <TSPDecoderDataInfo>)arg2;
- (id <TSUStreamReadChannel>)newReadChannelForRootObjectComponent;
- (id <TSUStreamReadChannel>)newReadChannelForMetadata;
@end

