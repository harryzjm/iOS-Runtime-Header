//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyBestIDSValueQuery;

__attribute__((visibility("hidden")))
@interface CNPropertyFaceTimeAction
{
    long long _type;
    CNPropertyBestIDSValueQuery *_bestFaceTimeQuery;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery; // @synthesize bestFaceTimeQuery=_bestFaceTimeQuery;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)queryComplete;
- (void)_queryFaceTimeStatus;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (_Bool)canPerformAction;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;

@end

