//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface PGBusinessItemQuestion
{
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (double)localFactoryScore;
- (id)entityIdentifier;
- (id)additionalInfo;
- (unsigned short)entityType;
- (unsigned short)displayType;
- (unsigned short)type;
- (id)initWithAssetUUID:(id)arg1 businessUUID:(id)arg2 businessName:(id)arg3 localFactoryScore:(double)arg4;

@end
