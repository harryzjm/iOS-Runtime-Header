//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface _PASImmutableDomainSelection
{
    NSSet *_domains;
}

- (void).cxx_destruct;
- (_Bool)isEqualToDomainSelection:(id)arg1;
- (_Bool)isEmpty;
- (id)allDomains;
- (_Bool)containsDomain:(id)arg1;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;

@end
