//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface APOdmlAllowList
{
    NSSet *_allowList;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *allowList; // @synthesize allowList=_allowList;
- (unsigned long long)count;
- (_Bool)isAllowed:(id)arg1;
- (void)reinitializeAllowList;
- (id)init;

@end
