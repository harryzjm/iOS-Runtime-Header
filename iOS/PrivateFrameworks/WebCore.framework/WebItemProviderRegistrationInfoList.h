//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, UIItemProvider;

@interface WebItemProviderRegistrationInfoList : NSObject
{
    struct RetainPtr<NSMutableArray> _representations;
    NSString *_suggestedName;
    long long _preferredPresentationStyle;
    NSData *_teamData;
    struct CGSize _preferredPresentationSize;
}

@property(copy, nonatomic) NSData *teamData; // @synthesize teamData=_teamData;
@property(nonatomic) long long preferredPresentationStyle; // @synthesize preferredPresentationStyle=_preferredPresentationStyle;
@property(copy, nonatomic) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
@property(nonatomic) struct CGSize preferredPresentationSize; // @synthesize preferredPresentationSize=_preferredPresentationSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UIItemProvider *itemProvider;
- (void)enumerateItems:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)addPromisedType:(id)arg1 fileCallback:(CDUnknownBlockType)arg2;
- (void)addRepresentingObject:(id)arg1;
- (void)addData:(id)arg1 forType:(id)arg2;
- (void)dealloc;
- (id)init;

@end

