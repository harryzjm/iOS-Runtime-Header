//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;
@protocol VUIShelvesDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryShelvesDataSource
{
    NSSet *_shelfTypes;
    NSDictionary *_dataSourcesByShelfType;
    id <VUIShelvesDataSourceDelegate> _shelvesDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VUIShelvesDataSourceDelegate> shelvesDelegate; // @synthesize shelvesDelegate=_shelvesDelegate;
@property(retain, nonatomic) NSDictionary *dataSourcesByShelfType; // @synthesize dataSourcesByShelfType=_dataSourcesByShelfType;
@property(retain, nonatomic) NSSet *shelfTypes; // @synthesize shelfTypes=_shelfTypes;
- (id)initWithValidShelfTypes:(id)arg1;

@end

