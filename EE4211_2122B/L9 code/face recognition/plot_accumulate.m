function plot_accumulate(curve,plotopt) % plot results

    x = 1:max(curve);
    y = zeros(1,max(curve));

    for i = 1:length(x)
        y(i) = numel(find(curve<=x(i)));
    end
    y = y/numel(curve);
    hold on,plot(x,y,plotopt,'linewidth',2.5);

    ylim([0,1]);
    set(gca,'FontSize',12);
    set(gca,'YTick',0.1:0.1:1);
    set(gca,'XTick',0:1:23);
    grid on;

end