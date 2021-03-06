//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JNWCollectionViewCell.h"

@class MMEmoticonData, NSImage, NSImageView, NSTextField, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface MMStickerPickerCell : JNWCollectionViewCell
{
    NSImageView *_imageView;
    NSTextField *_captionView;
    MMEmoticonData *_emoticonData;
    NSTrackingArea *_trackingArea;
    NSImage *_thumbImage;
    NSImage *_realImage;
    BOOL _rollover;
    BOOL _highlighted;
}

@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) MMEmoticonData *emoticonData; // @synthesize emoticonData=_emoticonData;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)_updateBackground;
- (void)setRollover:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)willLayoutWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (id)initWithFrame:(struct CGRect)arg1;

@end

