//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDSearchableIndex
{
}

+ (id)sharedInstance;
- (void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
