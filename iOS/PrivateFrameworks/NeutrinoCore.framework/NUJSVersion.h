//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUVersion;

@interface NUJSVersion
{
}

- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (_Bool)hasProperty:(id)arg1;
@property(readonly, nonatomic) NUVersion *version;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithVersion:(id)arg1 context:(id)arg2;

@end
