//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>

@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying>
{
    SSVFairPlaySAPSession *_SAPSession;
    _Bool _usesLocalNetworking;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesLocalNetworking; // @synthesize usesLocalNetworking=_usesLocalNetworking;
@property(retain, nonatomic) SSVFairPlaySAPSession *SAPSession; // @synthesize SAPSession=_SAPSession;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
