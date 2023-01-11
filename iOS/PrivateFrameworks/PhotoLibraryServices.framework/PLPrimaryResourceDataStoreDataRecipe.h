//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLPrimaryResourceDataStoreDataRecipe
{
    unsigned int _recipeID;
}

@property(nonatomic) unsigned int recipeID; // @synthesize recipeID=_recipeID;
- (id)description;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 progress:(id *)arg4 completion:(CDUnknownBlockType)arg5;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)codecInContext:(id)arg1;
- (id)utiInContext:(id)arg1;
- (id)initWithRecipeID:(unsigned int)arg1;

@end
