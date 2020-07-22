//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSSet;

@interface HDReadAuthorizationStatus : NSObject
{
    _Bool _isAuthorized;
    NSSet *_restrictedSourceEntities;
    NSNumber *_authorizationAnchor;
}

@property(readonly, copy, nonatomic) NSNumber *authorizationAnchor; // @synthesize authorizationAnchor=_authorizationAnchor;
@property(readonly, copy, nonatomic) NSSet *restrictedSourceEntities; // @synthesize restrictedSourceEntities=_restrictedSourceEntities;
@property(readonly, nonatomic) _Bool isAuthorized; // @synthesize isAuthorized=_isAuthorized;
- (void).cxx_destruct;
- (id)initWithReadAuthorizationStatus:(_Bool)arg1 restrictedSourceEntities:(id)arg2 authorizationAnchor:(id)arg3;

@end

