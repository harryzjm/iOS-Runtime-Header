//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView;
@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressCell
{
    _Bool _shouldUseMapTiles;
    UIImageView *_mapImageView;
    id <CNCancelable> _tileGeneratorToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CNCancelable> tileGeneratorToken; // @synthesize tileGeneratorToken=_tileGeneratorToken;
@property(retain, nonatomic) UIImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
@property(nonatomic) _Bool shouldUseMapTiles; // @synthesize shouldUseMapTiles=_shouldUseMapTiles;
- (void)tapGesture:(id)arg1;
- (void)setMapImage:(id)arg1;
- (id)variableConstraints;
- (void)generateAndSetMapTile;
- (_Bool)supportsTintColorValue;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setProperty:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

