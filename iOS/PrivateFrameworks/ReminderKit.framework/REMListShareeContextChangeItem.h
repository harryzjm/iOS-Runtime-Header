//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, REMListChangeItem;

@interface REMListShareeContextChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;
- (void)removeAllSharees;
- (void)removeSharee:(id)arg1;
- (id)addShareeWithPersonNameComponents:(id)arg1 address:(id)arg2 status:(long long)arg3 accessLevel:(long long)arg4;
- (id)addShareeWithDisplayName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 address:(id)arg4 status:(long long)arg5 accessLevel:(long long)arg6;
- (id)addShareeWithDisplayName:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 namePrefix:(id)arg5 nameSuffix:(id)arg6 nickname:(id)arg7 address:(id)arg8 status:(long long)arg9 accessLevel:(long long)arg10;
@property(readonly, nonatomic) NSArray *sharees;
- (void)addSharee:(id)arg1;
- (id)initWithListChangeItem:(id)arg1;

@end
