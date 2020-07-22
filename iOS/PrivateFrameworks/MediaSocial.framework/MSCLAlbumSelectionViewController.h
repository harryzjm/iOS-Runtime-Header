//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIViewController.h>

#import <MediaSocial/SKUIArtworkRequestDelegate-Protocol.h>
#import <MediaSocial/UITableViewDataSource-Protocol.h>
#import <MediaSocial/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, SKUIResourceLoader, UIImage, UITableView;

@interface MSCLAlbumSelectionViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_albumItems;
    _Bool _loading;
    UIImage *_placeholderImage;
    SKUIResourceLoader *_resourceLoader;
    long long _selectedItemIndex;
    CDUnknownBlockType _selectionBlock;
    UITableView *_tableView;
    NSString *_headerText;
}

@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSArray *albumItems; // @synthesize albumItems=_albumItems;
- (void).cxx_destruct;
- (id)_resourceLoader;
- (id)_placeholderImage;
- (id)_imageForItemIndex:(long long)arg1;
- (id)_imageDataConsumer;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

