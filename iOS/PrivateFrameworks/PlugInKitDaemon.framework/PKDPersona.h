//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface PKDPersona : NSObject
{
    _Bool _enterprise;
    NSNumber *_personaID;
}

+ (_Bool)personasAreSupported;
- (void).cxx_destruct;
@property(readonly, getter=isEnterprise) _Bool enterprise; // @synthesize enterprise=_enterprise;
@property(readonly) NSNumber *personaID; // @synthesize personaID=_personaID;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPersona:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPersonaID:(id)arg1 enterprise:(_Bool)arg2;

@end

