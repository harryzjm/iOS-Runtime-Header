//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface _MPMediaLibraryEntityPropertyTranslator : NSObject
{
    CDUnknownBlockType _sortTransformer;
    CDUnknownBlockType _valueTransformer;
    shared_ptr_217a6612 _propertiesToFetchMap;
    shared_ptr_217a6612 _propertiesToSortMap;
}

@property(copy, nonatomic) CDUnknownBlockType valueTransformer; // @synthesize valueTransformer=_valueTransformer;
@property(copy, nonatomic) CDUnknownBlockType sortTransformer; // @synthesize sortTransformer=_sortTransformer;
@property(nonatomic) shared_ptr_217a6612 propertiesToSortMap; // @synthesize propertiesToSortMap=_propertiesToSortMap;
@property(nonatomic) shared_ptr_217a6612 propertiesToFetchMap; // @synthesize propertiesToFetchMap=_propertiesToFetchMap;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
