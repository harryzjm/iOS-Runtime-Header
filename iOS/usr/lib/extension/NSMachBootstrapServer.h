//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSMachBootstrapServer
{
}

+ (id)sharedInstance;
- (_Bool)removePortForName:(id)arg1;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)servicePortWithName:(id)arg1;
- (_Bool)registerPort:(id)arg1 name:(id)arg2;
- (id)portForName:(id)arg1;
- (id)portForName:(id)arg1 options:(unsigned long long)arg2;

@end
