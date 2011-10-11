/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl, NSString, BRTextControl, BRMarqueeTextControl;

@interface BRComboMenuItemLayer : BRControl {
@private
	BRControl *_background;	// 40 = 0x28
	BRImageControl *_thumbnailLayer;	// 44 = 0x2c
	BRMarqueeTextControl *_titleLayer;	// 48 = 0x30
	BRTextControl *_subtitleLayer;	// 52 = 0x34
	BRTextControl *_leftTextLayer;	// 56 = 0x38
	BRTextControl *_middleTextLayer;	// 60 = 0x3c
	BRImageControl *_bottomRightImageLayer;	// 64 = 0x40
	BRImageControl *_topRightImageLayer;	// 68 = 0x44
	NSString *_thumbnailIdentifier;	// 72 = 0x48
	float _thumbnailPaddingFactor;	// 76 = 0x4c
	float _thumbnailLayerAspect;	// 80 = 0x50
}
@property(retain) id subtitle;	// G=0x3161cff1; S=0x315bdbc1; converted property
@property(retain) NSString *thumbnailIdentifier;	// G=0x315be795; S=0x315be04d; converted property
@property(assign) float thumbnailLayerAspectRatio;	// G=0x3161ce09; S=0x315be221; converted property
@property(assign) float thumbnailPaddingFactor;	// G=0x3161cdf9; S=0x315bda81; converted property
@property(retain) id title;	// G=0x3161d021; S=0x315bdab5; converted property
- (id)init;	// 0x315bd9b9
- (id)_comboMenuItemSubtitleTextAttributes;	// 0x3161d0c1
- (id)_comboMenuItemTitleTextAttributes;	// 0x3161d07d
- (id)axSelectedItemText;	// 0x3161ce19
- (void)controlWasFocused;	// 0x315be35d
- (void)controlWasUnfocused;	// 0x315be3d1
- (void)dealloc;	// 0x315be6bd
- (float)defaultRowHeight;	// 0x3161d051
- (CGRect)focusCursorFrame;	// 0x315be419
- (void)layoutSubcontrols;	// 0x3161d10d
- (void)setBottomRightImage:(id)image;	// 0x315be299
- (void)setLeftText:(id)text;	// 0x315bdccd
- (void)setMiddleText:(id)text;	// 0x315bddd9
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x315bdbc1
// converted property setter: - (void)setThumbnailIdentifier:(id)identifier;	// 0x315be04d
- (void)setThumbnailImage:(id)image;	// 0x315be15d
// converted property setter: - (void)setThumbnailLayerAspectRatio:(float)ratio;	// 0x315be221
// converted property setter: - (void)setThumbnailPaddingFactor:(float)factor;	// 0x315bda81
// converted property setter: - (void)setTitle:(id)title;	// 0x315bdab5
- (void)setTopRightImage:(id)image;	// 0x3161cf2d
// converted property getter: - (id)subtitle;	// 0x3161cff1
// converted property getter: - (id)thumbnailIdentifier;	// 0x315be795
// converted property getter: - (float)thumbnailLayerAspectRatio;	// 0x3161ce09
// converted property getter: - (float)thumbnailPaddingFactor;	// 0x3161cdf9
// converted property getter: - (id)title;	// 0x3161d021
@end
