//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IBUIColorAttributeTraitStorage
{
    id _color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id color; // @synthesize color=_color;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)uiTraitStorageWithObjectIDTable:(id)arg1;
- (id)initWithObjectID:(id)arg1 keyPath:(id)arg2 color:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

