//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentManagerCore/NSObject-Protocol.h>

@class DOCTag, NSArray, NSOrderedSet, NSString;

@protocol DOCTagRegistryDelegate <NSObject>
@property(readonly, nonatomic) NSOrderedSet *discoveredTags;
@property(readonly, nonatomic) NSOrderedSet *userTags;
@property(nonatomic) long long tagSerialNumber;
@property(nonatomic) _Bool inBatchUpdate;
- (DOCTag *)tagForName:(NSString *)arg1;
- (_Bool)moveTag:(DOCTag *)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)canReplaceTag:(DOCTag *)arg1 withTag:(DOCTag *)arg2;
- (_Bool)replaceTag:(DOCTag *)arg1 withTag:(DOCTag *)arg2;
- (void)removeAllTagsOfType:(long long)arg1;
- (void)removeTags:(NSArray *)arg1;
- (_Bool)insertTag:(DOCTag *)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)addTag:(DOCTag *)arg1;
- (void)addTag:(DOCTag *)arg1 options:(long long)arg2;
- (void)addTags:(NSArray *)arg1 options:(long long)arg2;
- (_Bool)isValidNewTagName:(NSString *)arg1;
@end

