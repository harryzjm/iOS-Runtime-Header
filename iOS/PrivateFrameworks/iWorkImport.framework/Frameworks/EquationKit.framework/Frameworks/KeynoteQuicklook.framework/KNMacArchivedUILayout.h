//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class KNMacUILayout;

@interface KNMacArchivedUILayout : TSPObject
{
    KNMacUILayout *_uiLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) KNMacUILayout *uiLayout; // @synthesize uiLayout=_uiLayout;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithUILayout:(id)arg1 context:(id)arg2;

@end
