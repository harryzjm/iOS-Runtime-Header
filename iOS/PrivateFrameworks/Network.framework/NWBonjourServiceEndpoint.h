//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NWBonjourServiceEndpoint
{
}

+ (id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;
+ (unsigned int)endpointType;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *name;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;

@end

