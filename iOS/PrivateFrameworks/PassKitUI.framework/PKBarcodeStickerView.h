//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSMutableArray, PKBarcode, UIImage, UIImageView, UILabel;

@interface PKBarcodeStickerView : UIButton
{
    PKBarcode *_barcode;
    UIImage *_barcodeImage;
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    _Bool _barcodeViewInvalidated;
    _Bool _drawBarcode;
    _Bool _shouldMatteCode;
    long long _validity;
    struct CGSize _desiredBarcodeSize;
}

+ (struct CGSize)_sizeForBarcode:(id)arg1;
+ (struct PKBarcodeQuietZone)_quietZoneForBarcode:(id)arg1;
+ (long long)validityStateForPass:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldMatteCode; // @synthesize shouldMatteCode=_shouldMatteCode;
@property(nonatomic) struct CGSize desiredBarcodeSize; // @synthesize desiredBarcodeSize=_desiredBarcodeSize;
@property(nonatomic) long long validity; // @synthesize validity=_validity;
- (id)barcodeImage;
- (void)_updateMatteViewHiding;
- (void)_updateDrawBarcode;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_generateMatteRect:(struct CGRect *)arg1 barcodeRect:(struct CGRect *)arg2 altTextRect:(struct CGRect *)arg3 boundingSize:(struct CGSize)arg4;
- (id)_resizedBarcode:(id)arg1 desiredSize:(struct CGSize)arg2;
- (void)_updateValidity;
- (id)initWithBarcode:(id)arg1 validityState:(long long)arg2;
- (struct CGSize)_varianceForBarcode:(id)arg1;

@end
