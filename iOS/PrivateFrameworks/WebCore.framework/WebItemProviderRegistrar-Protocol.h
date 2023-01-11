//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebCore/NSObject-Protocol.h>

@class NSData, NSItemProvider, NSString;
@protocol NSItemProviderWriting;

@protocol WebItemProviderRegistrar <NSObject>
- (void)registerItemProvider:(NSItemProvider *)arg1;

@optional
@property(readonly, nonatomic) NSData *dataForClient;
@property(readonly, nonatomic) NSString *typeIdentifierForClient;
@property(readonly, nonatomic) id <NSItemProviderWriting> representingObjectForClient;
@end

