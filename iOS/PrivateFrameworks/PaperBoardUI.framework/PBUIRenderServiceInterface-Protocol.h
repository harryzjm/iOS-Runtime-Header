//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PBUIRenderRequest><NSSecureCoding;

@protocol PBUIRenderServiceInterface
- (void)service_warmup:(void (^)(_Bool))arg1;
- (void)checkinWithReply:(void (^)(_Bool))arg1;
- (void)renderRequest:(id <PBUIRenderRequest><NSSecureCoding>)arg1 reply:(void (^)(IOSurface *, NSError *))arg2;
- (void)fetchColorSpaceNameWithReply:(void (^)(NSString *))arg1;
@end

