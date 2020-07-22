//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibrarySearchScope;

@interface MPModelLibrarySearchEntityResultContainer : NSObject
{
    MPModelLibrarySearchScope *_scope;
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    shared_ptr_274c5e8b _entityQueryResult;
}

@property(readonly, nonatomic) MPMediaLibraryEntityTranslationContext *entityTranslationContext; // @synthesize entityTranslationContext=_entityTranslationContext;
@property(readonly, copy, nonatomic) MPModelLibrarySearchScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) shared_ptr_274c5e8b entityQueryResult; // @synthesize entityQueryResult=_entityQueryResult;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntityQueryResult:(shared_ptr_274c5e8b)arg1 forScope:(id)arg2 entityTranslationContext:(id)arg3;

@end
